* {
    margin: 0;
    padding: 0;
    font-family: sans-serif;  
}

.container {
    border-radius: 10px;
    margin: 200px auto;
    display: grid;
    width: 900px;
    height: 500px;
    grid-template-columns: 2fr repeat(4, 1fr);
    grid-template-rows: 3fr repeat(6, 1fr) 1.5fr;
    grid-template-areas: "choose starter econom standart professional"
                         "amount amount1 amount2 amount3 amount4"
                         "bandwith bandwith1 bandwith2 bandwith3 bandwith4"
                         "email email1 email2 email3 email4"
                         "mysql mysql1 mysql2 mysql3 mysql4"
                         "h25 h25_1 h25_2 h25_3 h25_4"
                         "support support1 support2 support3 support4"
                         "btn-start btn-start1 btn-start2 btn-start3 btn-start4";
}

.price-container {       
    color: white;    
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    cursor: default;
}

.text {
    font-size: 18px;
    font-weight: 600;
}

.price {
    margin-top: 15px;
    margin-bottom: 5px;
    font-size: 40px;
    font-weight: 600;
}

.first-column {
    display: flex;
    align-items: center;
    cursor: default;
    padding-left: 30px;
    text-align: left;
}

.choose {
    border-top-left-radius: 10px;
    background-color: #7987ac;
}

.starter {
    background-color: #4f628d;
}

.econom {
    background-color: #2f4173;
}

.standart {
    background-color: #162954;
}

.professional {
    border-top-right-radius: 10px;
    background-color: #07153a;
}

.element {
    display: flex;
    justify-content: center;
    align-items: center;
    cursor: default;
}

.color1 {
    background-color: #dbdbdb;
}

.color2 {
    background-color: #e7e7e7;
}
.color3 {
    background-color: #f3f3f3;
}

.btn-start {
    border-bottom-left-radius: 10px;
}

.btn-start4 {
    border-bottom-right-radius: 10px;
}

.button {
    border: 2px solid #b1b1b1;
    color: #71736e;
    background-color: #d3d3d3;
    font-size: 14px;
    font-weight: 600;
    padding: 10px 30px;
    cursor: default;
}