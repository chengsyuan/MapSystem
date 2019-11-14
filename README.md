# MapSystem

## System Architecture

![docs1](/Users/paixingxing/Documents/GitHub/MapSystem/backend/assets/docs1.png)

## Demo

### Road Retrieval

![readme2](/Users/paixingxing/Documents/GitHub/MapSystem/resource/readme2.gif)

### Algorithm Analysis ![readme1](/Users/paixingxing/Documents/GitHub/MapSystem/resource/readme1.gif)



## Usage

### Docker
```bash
docker build .
docker run -p 5000:5000 <id>
```

### Or You can run on your own

#### Clone Project

```bash
git clone https://github.com/chengsyuan/MapSystem.git
cd MapSystem
```

#### Compiler cpp backend

```bash
cd cpp_backend && cmake CMakeLists && make && cp ./cpp_backend ../backend/
```

#### Run flask (web server)

```bash
cd ../backend && pip install flask && python app.py
```

#### Open http://127.0.0.1:5000/