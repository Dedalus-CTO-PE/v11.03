create table emrmtxaf
(
  emmxnat     char(2) default ' ' not null,
  emmxbrg     char(2) default ' ' not null,
  emmxpdg     char(6) default ' ' not null,
  emmxspa     char(50) default ' ' not null,
  lf          char(1)
);
create unique index emrmtxa1 on emrmtxaf
(
emmxnat,
emmxbrg,
emmxpdg
);
create unique index emrmtxa2 on emrmtxaf
(
emmxbrg,
emmxnat,
emmxpdg
);
create unique index emrmtxa3 on emrmtxaf
(
emmxpdg,
emmxbrg,
emmxnat
);
revoke all on emrmtxaf from public ; 
grant select on emrmtxaf to public ; 
