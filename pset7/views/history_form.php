<link href="/css/styles.css" rel="stylesheet"/>
<link href="/css/bootstrap.min.css" rel="stylesheet"/>

<div class="container" id="middle">
    <table class="table table-striped" align="center">
    <tr>
    <th style="text-align:center">Transaction Type</th>
    <th style="text-align:center">Symbol</th>
    <th style="text-align:center">Shares</th>
    <th style="text-align:center">Price</th>
    <th style="text-align:center">Date</th>
    </tr>
    
    <?php foreach ($info as $item): ?>
    <tr>
    <td><?= $item["trans_type"] ?></td>
    <td><?= $item["symbol"] ?></td>
    <td><?= $item["shares"] ?></td>
    <td>$<?= $item["price"] ?></td>
    <td><?= $item ["date"]  ?></td>
    </tr>

    <?php endforeach ?>
</table>