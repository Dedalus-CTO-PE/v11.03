create table pmswfmaf
(
  pmwffldn    char(5) default ' ' not null,
  pmwfides    char(35) default ' ' not null,
  pmwfsdes    char(35) default ' ' not null,
  pmwfscde    char(35) default ' ' not null,
  pmwfmand    char(1) default ' ' not null,
  pmwfspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmswfma1 on pmswfmaf
(
pmwffldn
);
create unique index pmswfma2 on pmswfmaf
(
pmwfmand,
pmwffldn
);
revoke all on pmswfmaf from public ; 
grant select on pmswfmaf to public ; 
