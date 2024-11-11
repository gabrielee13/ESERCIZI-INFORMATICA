let Tasks = [

    {"titolo": "Studiare italiano", done: false},
    {"titolo": "Studiare TPSIT", done: false},
    {"titolo": "Prendere una nota dalla professoressa Marangon", done: true}

];

let elencoAzioniSvolte = document.getElementById("ul-done");
let elencoAzioniDaSvolgere = document.getElementById("ul-not-done");
let azioniSvolte = "";
let azioniDaSvolgere= "";
Tasks.forEach(task => {
    if(task.done) azioniSvolte+="<li>" + task.titolo + "</li>";
    
    else azioniDaSvolgere+="<li>" + task.titolo + "</li>";
    
})
elencoAzioniSvolte.innerHTML = azioniSvolte;
elencoAzioniDaSvolgere.innerHTML = azioniDaSvolgere;