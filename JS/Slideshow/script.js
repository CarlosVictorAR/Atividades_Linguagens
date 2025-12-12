/*
    Slide Show
    1- Dois botões previus and next;
    2- botão de adicionar imagem;
*/

// Functions 

    let actual = 0;
    
    function previus(){

        let imagesLength = parseInt(slides.length);
        actual = (actual - 1 + imagesLength) % imagesLength;
        imagesDiv.style.transform = `translateX(${-actual * 64}dvw)`;

    }

    function next(){

        let imagesLength = parseInt(slides.length);
        actual = (actual + 1 + imagesLength) % imagesLength;
        imagesDiv.style.transform = `translateX(${-actual * 64}dvw)`;
       
    }

//=========================

// Main Div

    let mainDiv = document.createElement('div');
    mainDiv.classList.add('mainDiv');
    document.body.appendChild(mainDiv);

    let camOut = document.createElement('div');
    camOut.classList.add('camOut');
    mainDiv.appendChild(camOut);

    let camIn = document.createElement('div');
    camIn.classList.add('camIn');
    camOut.appendChild(camIn);

    // Slides Div

        let slidesDiv = document.createElement('div');
        slidesDiv.classList.add('slidesDiv');
        mainDiv.appendChild(slidesDiv);
        let imagesDiv = document.createElement('div');
        imagesDiv.classList.add('imagesDiv');
        slidesDiv.appendChild(imagesDiv);

        let slides = ["133874000221678248.jpg","133885787636418552.jpg","tarde.jpg"];


        //===========================


        // Buttons
    
            let previusButton = document.createElement('button');
            previusButton.classList.add('previusButton');
            previusButton.textContent = "<";
            let nextButton = document.createElement('button');
            nextButton.textContent = ">";
            nextButton.classList.add('nextButton');
            let addImage = document.createElement('button');
            addImage.classList.add('addImage');
            addImage.textContent = "Upload Image";
            mainDiv.appendChild(addImage);
            //upload
            addImage.addEventListener("click", () => {

                let input = document.createElement("input");
                input.type = "file";
                input.accept = "image/*";
                input.click();
                input.addEventListener("change", () => {
                    let file = input.files[0];
                    if (file) {
                        let url = URL.createObjectURL(file);
                        slides.push(url);

                        let image = document.createElement("img");
                        image.src = url;
                        image.classList.add("img");
                        imagesDiv.appendChild(image);
                    }
                });
            });
        //=========
            nextButton.addEventListener('click',next);
            previusButton.addEventListener('click',previus);
            mainDiv.appendChild(previusButton);
            mainDiv.appendChild(nextButton);

            //images

                slides.forEach(i => {
                    let image = document.createElement('img');
                    image.src = i;
                    image.classList.add('img');
                    imagesDiv.appendChild(image);
                });

            //=====================
            mainDiv.appendChild(addImage);
            
    
        //======================================

    //======================================

//========================================