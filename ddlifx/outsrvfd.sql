create table outsrvaf
(
otsrsite    char(6),
otsrclin    char(6),
otsrsdat    char(8),
otsrstim    char(5),
otsrslot    char(3),
otsredat    char(8),
otsretim    char(5),
otsrwebu    char(10),
otsrrdat    char(8),
otsrrtim    char(5),
otsrspar    char(50),
lf          char(1)
);
create unique index outsrva1 on outsrvaf
(
otsrsite,
otsrclin,
otsrsdat,
otsrstim,
otsrslot
);
create unique index outsrva2 on outsrvaf
(
otsredat,
otsretim,
otsrsite,
otsrclin,
otsrsdat,
otsrstim,
otsrslot
);
create unique index outsrva3 on outsrvaf
(
otsrwebu,
otsrsite,
otsrclin,
otsrsdat,
otsrstim,
otsrslot
);
revoke all on outsrvaf from public ; 
grant select on outsrvaf to public ; 
