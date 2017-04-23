import { Component } from '@angular/core';
import { NavController, AlertController } from 'ionic-angular';
import { MediaPlugin, MediaObject } from '@ionic-native/media';

@Component({
  selector: 'page-home',
  templateUrl: 'home.html'
})
export class HomePage {

	mediaPlug: MediaPlugin;
	mediaObj: MediaObject;

	constructor(public navCtrl: NavController, public alertCtrl: AlertController) {

	}

	ionViewDidEnter(){
		this.mediaPlug = new MediaPlugin();
		this.mediaPlug.create('/android_asset/www/assets/audio/audio_input.mp3').then(mediaObj => this.mediaObj = mediaObj);
	}

	startRecording(){
		this.mediaObj.startRecord();
	}

	stopRecording(){
		this.mediaObj.stopRecord();
	}

	playRecording(){
		this.mediaObj.play();
	}

	showAlert(message){
		let alert = this.alertCtrl.create({
			title: 'Error',
			subTitle: message,
			buttons: ['OK']
		});
		alert.present();
	}



}
