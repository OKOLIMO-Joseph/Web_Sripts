document.addEventListener('DOMContentLoaded', function(){
    document.querySelector('select').onchange = function(){
        document.querySelector('body').style.backgroundColor = this.value;

        if(document.querySelector('body').style.backgroundColor === 'black'){
            document.querySelector('#main').style.color = 'white';
        } else{
            document.querySelector('#main').style.color = 'black';
        }
    }
})