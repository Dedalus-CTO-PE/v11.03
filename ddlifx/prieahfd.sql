create table prieahaf
(
  prahfbid    char(3) default ' ' not null,
  praharid    char(20) default ' ' not null,
  prahclid    char(6) default ' ' not null,
  prahrptc    char(3) default ' ' not null,
  prahcpfn    char(40) default ' ' not null,
  prahcpmn    char(10) default ' ' not null,
  prahcprn    char(1) default ' ' not null,
  prahfscd    char(4) default ' ' not null,
  prahcfac    char(1) default ' ' not null,
  prahmcfc    char(1) default ' ' not null,
  prahmscd    char(4) default ' ' not null,
  prahpsnm    char(40) default ' ' not null,
  prahpfnm    char(40) default ' ' not null,
  prahpmcn    char(10) default ' ' not null,
  prahprfn    char(1) default ' ' not null,
  prahstat    char(2) default ' ' not null,
  prahftid    char(24) default ' ' not null,
  prahudte    char(8) default ' ' not null,
  prahutim    char(8) default ' ' not null,
  prahspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index prieaha1 on prieahaf
(
prahfbid,
praharid,
prahclid,
prahrptc
);
create unique index prieaha2 on prieahaf
(
prahftid,
prahfbid,
praharid,
prahclid,
prahrptc
);
revoke all on prieahaf from public ; 
grant select on prieahaf to public ; 
