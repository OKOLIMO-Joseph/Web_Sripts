document.addEventListener('DOMContentLoaded', () =>{
    //document.querySelector('#submit').disabled = true;
    document.querySelector('#email').disabled = true;
    document.querySelector('#access').disabled = true;
    document.querySelector('#conaccess').disabled = true;

    document.querySelector('#name').onkeyup = () =>{
        //const name = document.querySelector('#name').value;
        document.querySelector('#email').disabled = false;

        //Default auto submission
        return false;
    }
    document.querySelector('#email').onkeyup = () =>{
        //const name = document.querySelector('#name').value;
        document.querySelector('#access').disabled = false;

        //Default auto submission
        return false;
    }
    document.querySelector('#access').onkeyup = () =>{
        //const name = document.querySelector('#name').value;
        document.querySelector('#conaccess').disabled = false;       

        //Default auto submission
        return false;
    }
    document.querySelector('#submit').onsubmit = () =>{
        if(document.querySelector('#access').value != document.querySelector('#conaccess').value){
            alert('You Access number And Confirm Access number are not matching!');
        } else{
            document.querySelector('#submit').disabled = true;
        }
    }
    
})