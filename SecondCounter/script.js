let username = document.getElementById("username");
let email = document.getElementById("email");
let pswd = document.getElementById("pswd");
let confPswd = document.getElementById("ConfPswd");
let form = document.querySelector("form");

function validateinput(){
    //Validating username
    if(username.value.trim()===""){
        onError(username, "Please enter your username!");
        
    } else{
        onSuccess(username);
    }
    if(email.value.trim()===""){
        onError(email, "Please enter your email address!");
    } else{
        onSuccess(email);
    }
    if(pswd.value.trim()===""){
        onError(pswd, "Please enter your Access Number!");
    } else{
        onSuccess(pswd);
    }
    if(confPswd.value.trim()==""){
        onError(confPswd, "Please confirm your Access Number!");
    } else{
        if(confPswd.value.trim()!==pswd.value.trim()){
        onError(pswd, "Your Access Numbers are not matching!")
        } else{
            onSuccess(confPswd);
        }
    }
}
document.querySelector("button")
.addEventListener("click", (event) =>{
    event.preventDefault();
    validateinput();
})

function onSuccess(input){
  
        let parent = input.parentElement;
        let messageEle = parent.querySelector("small");
        messageEle.style.visibility="hidden";
        parent.classList.remove("error");
        parent.classList.add("success");
      } 
      function onError(input, message){
          let parent = input.parentElement;
          let messageEle = parent.querySelector("small");
          messageEle.style.visibility="visible";
          messageEle.innerText=message;
          parent.classList.add("error");
          parent.classList.remove("success");
      }




