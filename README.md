# mottag-iot

Projeto de rastreamento de motos utilizando dispositivos IoT com ESP32, desenvolvido para o Challenge FIAP 2025.

## Descrição
Este projeto implementa um sistema de rastreamento de motos baseado em IoT, composto por dois módulos principais:
- **Antena:** Atua como ponto de acesso Wi-Fi (Access Point), permitindo a detecção de proximidade de rastreadores.
- **Rastreador:** Realiza varreduras periódicas de redes Wi-Fi para identificar antenas próximas e reportar a intensidade do sinal.

O objetivo é monitorar a presença e localização aproximada das motos em pátios ou áreas monitoradas, utilizando a infraestrutura de redes Wi-Fi.

## Vídeo de Demonstração
Acesse o vídeo de demonstração do projeto no YouTube: [Vídeo de Demonstração](https://youtu.be/S164cOmz0dU)

## Sobre nós
Desenvolvido para o Challenge FIAP 2025 por:

Grupo LLM
- Gabriel Marques de Lima Sousa - RM 554889
- Leonardo Matheus Teixeira - RM 556629
- Leonardo Menezes Parpinelli Ribas - RM 557908

## Funcionalidades
- Criação de ponto de acesso Wi-Fi (antena)
- Varredura de redes Wi-Fi e identificação de antenas (rastreador)
- Indicação visual de funcionamento via LED
- Exibição de informações de sinal no monitor serial

## Tecnologias Utilizadas
- ESP32 (Arduino)
- Arduino IDE
- Biblioteca WiFi.h

## Como executar

### Pré-requisitos
- Placa ESP32 devidamente configurada no Arduino IDE
- Arduino IDE instalado

### Passos

1. **Antena**
   - Abra o arquivo [`antena/antena.ino`](antena/antena.ino) na Arduino IDE.
   - Faça o upload para o ESP32 que atuará como antena.
   - O dispositivo criará um ponto de acesso Wi-Fi chamado `antena2` com a senha definida no código.

2. **Rastreador**
   - Abra o arquivo [`rastreador/rastreador.ino`](rastreador/rastreador.ino) na Arduino IDE.
   - Faça o upload para o ESP32 que atuará como rastreador.
   - O dispositivo fará varreduras periódicas e exibirá no monitor serial as antenas encontradas e a potência do sinal.

## Resultados Parciais

- [x] Implementação do ponto de acesso Wi-Fi (antena)
- [x] Varredura e detecção de antenas pelo rastreador
- [x] Comunicação básica entre dispositivos via Wi-Fi
- [x] Indicação visual de funcionamento (LED)
- [ ] Integração com backend para envio dos dados de rastreamento
- [ ] Otimização do consumo de energia dos dispositivos
- [ ] Integração com API Java do projeto

## Estrutura do Projeto
- `antena/`: Código-fonte do módulo antena (`antena.ino`)
- `rastreador/`: Código-fonte do módulo rastreador (`rastreador.ino`)

## Roadmap
- [x] Prova de conceito de comunicação entre antena e rastreador
- [ ] Envio de dados para backend
- [ ] Integração com API Java
- [ ] Testes em campo com múltiplas antenas e rastreadores
- [ ] Documentação detalhada de hardware
