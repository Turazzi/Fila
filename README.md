<h1>Fila do Banco</h1>
<p>Implementação da estrutura de dados fila em um sistema de fila de banco</p>

<h2>Descrição do Trabalho:</h2>
<p>Faça um programa que simule uma fila de um banco, conforme características a seguir:</p>
<ul>
  <li>O banco possui duas filas de clientes, uma para o público geral e outra para prioridades. Essas duas filas são atendidas pelos caixas do banco.</li>
  <li>Ao liberar um caixa, um cliente da fila é chamado, atendendo às seguintes restrições:</li>
  <ul>
    <li>Se a fila de prioridades está vazia, sempre é chamado o primeiro da fila geral</li>
    <li>Se a fila de prioridades não estiver vazia, o cliente dessa fila é chamado, desde que não tenha sido chamado três clientes prioridades de forma seguida. Ou seja, se três prioridades forem chamados seguidamente, um cliente da fila geral deve ser chamado. Após isso, novos clientes prioridades podem ser chamados novamente.</li>
  </ul>
</ul>

<h3>Requisitos de implementação:</h3>
<ul>
  <li>Todo o código deve ser implementado em linguagem C.</li>
  <li>Utilize arquivos do tipo .h para declarações e .c para as implementações da TAD Fila</li>
  <li>Tipo de Dado t_queue</li>
  <li>Faça um programa separado que faça uso das operações do banco usando a TAD Fila</li>
  <li>Inclua um makefile para facilitar a compilação do código.</li>
  <li>A implementação da fila deve ser estática circular</li>
</ul>

<h3>Entrada e saída:</h3>
<p>Seu programa deve entrar com um identificador do tipo do cliente, seguido do seu nome. O identificador para clientes prioridade é a letra p, enquanto que para clientes gerais é a letra g. Quando um caixa é liberado, então o próximo da fila é chamado, por meio do comando s. Ao inserir o comando f, é indicado que o expediente do banco se encerrou e então deve ser impressa a ordem em que os clientes foram atendidos.</p>
<p>Exemplo de entrada e saída:</p>
