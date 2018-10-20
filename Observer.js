/*
This is a class of an observerable which is kind of the subject. Subscribers subscribe to the observable and
the observable sends the data to the subscribers
*/

class Observable {

    constructor(){
        this.observers = [];
    }

    subscribe(f){
        this.observers.push(f);
    }

    unsubscribe(f){
        this.observers.filter(obs => obs!==f );
    }

    notify(data){
        this.observers.forEach(observer =>{
            console.log(observer);
            observer(data);
        })
    }
}
