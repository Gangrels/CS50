<link href="/css/styles.css" rel="stylesheet"/>
<link href="/css/bootstrap.min.css" rel="stylesheet"/>

<div class="container" id="middle">
    <table class="table table-striped" align="center" >
    <tr>
    <th style="text-align:center">Symbol</th>
    <th style="text-align:center">Shares</th>
    <th style="text-align:center">Price</th>
    </tr>
     <tr>
    <?php foreach ($positions as $position): ?>
    <td><?= $position["symbol"] ?></td>
    <td><?= $position["shares"] ?></td>
    <td>$<?= $position["price"] ?></td>
    </tr>

    <?php endforeach ?>
</table>
<div>
    <table class="table table-striped" align="center" >
        <tr>
        <th style="text-align:center">Money</th>
        </tr>
        <tr>
            <td>$<?=$money?></td>
        </tr>
    </table>
</div>