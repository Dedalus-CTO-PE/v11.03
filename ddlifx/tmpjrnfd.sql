create table tmpjrnaf
(
  tmjrbtch    char(8) default ' ' not null,
  tmjrurno    char(8) default ' ' not null,
  tmjrvist    char(8) default ' ' not null,
  tmjrinvn    char(8) default ' ' not null,
  tmjrjtyp    char(3) default ' ' not null,
  tmjrjdat    char(8) default ' ' not null,
  tmjrdesc    char(30) default ' ' not null,
  tmjramnt    decimal(12,2) default 0 not null,
  tmjrgstc    char(6) default ' ' not null,
  tmjrspar    char(44) default ' ' not null,
  lf          char(1)
);
create unique index tmpjrna1 on tmpjrnaf
(
tmjrbtch,
tmjrurno,
tmjrvist,
tmjrinvn,
tmjrjtyp
);
revoke all on tmpjrnaf from public ; 
grant select on tmpjrnaf to public ; 
