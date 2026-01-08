# 📊 Algoritmos de Ordenação e Busca (ED2)

Este repositório reúne as principais estruturas de ordenação e busca desenvolvidas durante a disciplina de **Estrutura de Dados 2** no **IFSP**. O projeto foi estruturado de forma modular, utilizando arquivos de cabeçalho (`.h`) para isolar a lógica de cada algoritmo, facilitando o estudo e a comparação de desempenho.

O diferencial deste software é o **contador de interações**, que permite visualizar na prática a diferença de eficiência entre algoritmos simples e algoritmos avançados.

---

## ⚡ Algoritmos Implementados

### Ordenação (Sorting)
* **Bubble Sort**: Algoritmo simples de trocas sucessivas.
* **Selection Sort**: Ordenação por seleção do menor elemento.
* **Insertion Sort**: Ordenação por inserção, eficiente para conjuntos pequenos.
* **Shell Sort**: Uma extensão do Insertion Sort que permite trocas de elementos distantes.
* **Heap Sort**: Baseado na estrutura de dados Heap (árvore binária).
* **Quick Sort**: Algoritmo de "dividir para conquistar" altamente eficiente.

### Busca (Searching)
* **Busca Sequencial**: Varredura linear do vetor.
* **Busca Binária**: Busca otimizada para vetores previamente ordenados.

---

## 📈 Comparativo de Complexidade

| Algoritmo | Melhor Caso | Médio Caso | Pior Caso |
| :--- | :---: | :---: | :---: |
| Bubble Sort | O(n) | O(n²) | O(n²) |
| Selection Sort | O(n²) | O(n²) | O(n²) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) |
| Heap Sort | O(n log n) | O(n log n) | O(n log n) |



---

## 🛠️ Como Utilizar

O programa principal (`main.c`) oferece um menu interativo para testar os algoritmos com vetores gerados aleatoriamente ou inseridos manualmente.

1.  **Compile o projeto:**
    ```bash
    gcc main.c -o ordenador
    ```
2.  **Execute:**
    ```bash
    ./ordenador
    ```
3.  **No menu:** Escolha o método de ordenação e observe o número de **interações** necessárias para concluir a tarefa.

---

## 📂 Estrutura Modular

O projeto utiliza uma estrutura de arquivos limpa:
- `main.c`: Interface com o usuário e gerador de vetores.
- `*.h`: Cada algoritmo possui seu próprio arquivo de definição, garantindo alta coesão e baixo acoplamento.

---

## 👨‍💻 Desenvolvedor

**Felipe Neves**
📍 Presidente Epitácio - SP
