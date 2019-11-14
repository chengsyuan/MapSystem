import Vue from 'vue'
import echarts from 'echarts'
import VCharts from 'v-charts'
//import './element/index.css'
import ElementUI from 'element-ui';
import 'element-ui/lib/theme-chalk/index.css';
import App from './App.vue'
import router from './router'
import VueKatex from 'vue-katex'
import 'katex/dist/katex.min.css';

Vue.config.productionTip = false;
Vue.use(ElementUI);
Vue.use(echarts);
Vue.use(VCharts);
Vue.use(VueKatex);


new Vue({
  el: '#app',
  router,
  render: h => h(App)
})