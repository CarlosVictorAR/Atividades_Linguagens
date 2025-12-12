// main div
    let mainDiv = document.createElement('div');
    mainDiv.classList.add('main');
    document.body.appendChild(mainDiv);

    // title div
        let titleDiv = document.createElement('div');
        titleDiv.classList.add('title');
        let text = document.createElement('p');
        text.classList.add('text');
        text.innerText = 'Drum Kit';
        let textBack = document.createElement('p');
        textBack.classList.add('textBack');
        textBack.innerText = 'Drum Kit';
        titleDiv.appendChild(text);
        titleDiv.appendChild(textBack);
        mainDiv.appendChild(titleDiv);
        
    // sounds div
    
        let soundDiv = document.createElement('div');
        soundDiv.classList.add('sound');
        let A = document.createElement('button');
        A.classList.add('A');
        let S = document.createElement('button');
        S.classList.add('S');
        let D = document.createElement('button');
        D.classList.add('D');
        let F = document.createElement('button');
        F.classList.add('F');
        let G = document.createElement('button');
        G.classList.add('G');
        let H = document.createElement('button');
        H.classList.add('H');
        let J = document.createElement('button');
        J.classList.add('J');
        let K = document.createElement('button');
        K.classList.add('K');
        let L = document.createElement('button');
        L.classList.add('L');
        soundDiv.appendChild(A);
        soundDiv.appendChild(S);
        soundDiv.appendChild(D);
        soundDiv.appendChild(F);
        soundDiv.appendChild(G);
        soundDiv.appendChild(H);
        soundDiv.appendChild(J);
        soundDiv.appendChild(K);
        soundDiv.appendChild(L);
        mainDiv.appendChild(soundDiv);
        