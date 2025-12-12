    async function ensinarMateriaCustomizada() {
      const materia = document.getElementById("materiaPersonalizada").value.trim();
      const explicacaoDiv = document.getElementById("explicacaoIA");
      const questoesDiv = document.getElementById("questoesIA");

      if (!materia) {
        explicacaoDiv.textContent = "Digite uma matéria para estudar.";
        return;
      }

      explicacaoDiv.textContent = "Gerando explicação com IA...";
      questoesDiv.textContent = "Gerando questões...";

      try {
        const explicacao = await chamarGeminiProAPI(`Explique de forma rápida e simples sobre ${materia}.`);
        const questoes = await chamarGeminiProAPI(`Crie 5 questões de nível médio sobre ${materia} com respostas gabaritadas.`);

        explicacaoDiv.textContent = explicacao;
        questoesDiv.innerHTML = `<strong>Exercícios:</strong><br>${questoes.replace(/\n/g, '<br>')}`;
      } catch (error) {
        explicacaoDiv.textContent = "Erro ao gerar conteúdo com IA.";
        questoesDiv.textContent = "";
        console.error(error);
      }
    }

    async function chamarGeminiProAPI(prompt) {
      // Substitua os valores abaixo com suas configurações reais
      const apiKey = "AIzaSyABthpWmfqo7ZZ44qVrVgzpX7ns6VkwPPw";
      const endpoint = "https://gemini.googleapis.com/v1/chat/completions";

      const bodyPayload = {
        model: "gemini-pro-1",  // nome do modelo Gemini Pro pode variar
        messages: [
          { role: "system", content: "Você é um professor de matemática para alunos do ensino médio." },
          { role: "user", content: prompt }
        ],
        max_tokens: 1000,
        temperature: 0.7
      };

      const response = await fetch(endpoint, {
        method: "POST",
        headers: {
          "Content-Type": "application/json",
          "Authorization": `Bearer ${apiKey}`
        },
        body: JSON.stringify(bodyPayload)
      });

      if (!response.ok) {
        throw new Error(`Erro na API Gemini Pro: ${response.status} - ${response.statusText}`);
      }

      const data = await response.json();
      // Ajuste conforme estrutura do retorno da Gemini Pro
      return data.choices[0].message.content.trim();
    }