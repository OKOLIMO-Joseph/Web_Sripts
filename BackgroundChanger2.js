document.addEventListener('DOMContentLoaded', function(){
    document.querySelector('submit').onsubmit = function(){
        document.querySelector('body').style.backgroundColor = this.value;

        return false;
    }
})