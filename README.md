# GH MANAGER 🌿 | Monitoramento Inteligente de Estufas

O **GH MANAGER** é um sistema de monitoramento ambiental projetado para atuar como um vigia 24/7 em cultivos controlados. O projeto fornece uma interface de leitura clara e um sistema de segurança robusto, disparando alertas automáticos caso as condições do ambiente se tornem hostis às plantas.

## 🚀 Objetivo
Fornecer dados precisos sobre o microclima da estufa e garantir a integridade do cultivo através de sensores de alta fidelidade e uma interface visual dinâmica.

---

## 🛠️ Tecnologias e Componentes
- **Linguagem:** C/C++
- **Ambiente de Desenvolvimento:** PlatformIO / VS Code
- **Microcontrolador:** Arduino UNO
- **Sensores:**
  - Temperatura e Umidade do Ar: DHT11
  - Temperatura Extra: LM36 (TMP36)
  - Umidade do Solo: Sensor Analógico Capacitivo/Resistivo
  - Segurança: Sensor de Gás (Série MQ)
  - Luminosidade: LDR (Fotoresistor)
- **Interface:** Display LCD 16x2 com módulo I2C

---

## 📂 Estrutura do Projeto (Modular)
Este projeto utiliza uma arquitetura modular para facilitar o desenvolvimento em equipe via Git:

* `src/main.cpp`: Orquestração do fluxo principal (Setup/Loop).
* `include/Sensores.h` & `src/Sensores.cpp`: Lógica de leitura e processamento de dados brutos.
* `include/Display.h` & `src/Display.cpp`: Gerenciamento da interface visual e transição de telas.
* `include/Seguranca.h` & `src/Seguranca.cpp`: Algoritmos de detecção de risco e limites críticos.

---

## 📋 Requisitos do Sistema
### Funcionais
- [x] Identificação de variações de temperatura e umidade em tempo real.
- [x] Transmissão de dados dos sensores para o microcontrolador.
- [x] Exibição de informações em display LCD rotativo.
- [x] Disparo de alertas automáticos em caso de níveis críticos de gás.

### Não Funcionais
- Confiabilidade: O sistema deve operar ininterruptamente.
- Modularidade: Código estruturado para fácil manutenção e adição de novos sensores.

---

## 🔧 Como Executar
1. Instale o [VS Code](https://code.visualstudio.com/) e a extensão [PlatformIO](https://platformio.org/).
2. Clone este repositório:
   ```bash
   git clone [https://github.com/seu-usuario/gh-manager.git](https://github.com/seu-usuario/gh-manager.git)
