function check(){
    var first = document.getElementById("First").value;
    var second = document.getElementById("Second").value;

    if(first.length < 8){
        alert("This password is bad. Make it at least 8 characters.");
    }
    else if(first != second){
        alert("You appear to have not entered the password correctly. Try again.")
    }
    else{
        alert("Password entered successfully");
    }


}


function getValue(){
    var boR = document.getElementById("BoR").value;
    var boG = document.getElementById("BoG").value;
    var boB = document.getElementById("BoB").value;
    var boW = document.getElementById("BoW").value;
    var baR = document.getElementById("BaR").value;
    var baG = document.getElementById("BaG").value;
    var baB = document.getElementById("BaB").value;

    var test = document.getElementById("par");
    test.style.borderColor = `rgb(${boR},${boG},${boB})`
    test.style.borderWidth = boW + "px";
    test.style.backgroundColor = `rgb(${baR},${baG},${baB})`









}