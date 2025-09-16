create table outeahaf
(
  otehclid    char(6) default ' ' not null,
  otehrptc    char(3) default ' ' not null,
  otehclbp    char(9) default ' ' not null,
  otehclca    char(9) default ' ' not null,
  otehsdat    char(8) default ' ' not null,
  otehsnam    char(40) default ' ' not null,
  otehfnam    char(40) default ' ' not null,
  otehmecf    char(1) default ' ' not null,
  otehmnum    char(10) default ' ' not null,
  otehrnum    char(1) default ' ' not null,
  otehsrvp    char(8) default ' ' not null,
  otehctid    char(24) default ' ' not null,
  otehudte    char(8) default ' ' not null,
  otehutim    char(8) default ' ' not null,
  otehrkey    char(24) default ' ' not null,
  otehspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index outeaha1 on outeahaf
(
otehclid,
otehrptc,
otehrkey
);
create unique index outeaha2 on outeahaf
(
otehctid,
otehclid,
otehrptc,
otehrkey
);
revoke all on outeahaf from public ; 
grant select on outeahaf to public ; 
