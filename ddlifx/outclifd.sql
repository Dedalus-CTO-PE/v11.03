create table outaudcl
(
  otclaudd    char(8) default ' ' not null,
  otclaudt    char(8) default ' ' not null,
  otclaudp    char(2) default ' ' not null,
  otclaudr    char(1) default ' ' not null,
  otclauds    decimal(1,0) default 0 not null,
  otclaudo    char(4) default ' ' not null,
  ocasite     char(6) default ' ' not null,
  ocaclin     char(6) default ' ' not null,
  ocadate     char(8) default ' ' not null,
  ocadoct     char(6) default ' ' not null,
  ocadesc     char(30) default ' ' not null,
  ocaccons    char(6) default ' ' not null,
  otcliact    char(1) default ' ' not null,
  ocaspare    char(4) default ' ' not null,
  lf          char(1)
);
create index outaudcl on outaudcl
(
otclaudd,
otclaudt,
otclaudp,
otclaudr
);
revoke all on outaudcl from public ; 
grant select on outaudcl to public ; 
create table outcliaf
(
  ocasite     char(6) default ' ' not null,
  ocaclin     char(6) default ' ' not null,
  ocadate     char(8) default ' ' not null,
  ocadoct     char(6) default ' ' not null,
  ocadesc     char(30) default ' ' not null,
  ocaccons    char(6) default ' ' not null,
  otcliact    char(1) default ' ' not null,
  ocaspare    char(4) default ' ' not null,
  lf          char(1)
);
create unique index outclia1 on outcliaf
(
ocasite,
ocaclin,
ocadate
);
create unique index outclia5 on outcliaf
(
ocasite,
ocadesc,
ocaclin,
ocadate
);
create unique index outclia6 on outcliaf
(
ocadoct,
ocaclin,
ocadate,
ocasite
);
revoke all on outcliaf from public ; 
grant select on outcliaf to public ; 
