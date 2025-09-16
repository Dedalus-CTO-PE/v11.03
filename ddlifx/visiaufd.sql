create table visiauaf
(
  vsiacdat    char(8) default ' ' not null,
  vsiactim    char(8) default ' ' not null,
  vsiartyp    char(1) default ' ' not null,
  vsiavisn    char(8) default ' ' not null,
  vsiadate    char(8) default ' ' not null,
  vsiatime    char(8) default ' ' not null,
  vsiatype    decimal(2,0) default 0 not null,
  vsiasubk    char(50) default ' ' not null,
  vsiawuid    char(10) default ' ' not null,
  vsialng1    char(3) default ' ' not null,
  vsialng2    char(3) default ' ' not null,
  vsialng3    char(3) default ' ' not null,
  vsianotf    char(1) default ' ' not null,
  vsiaconf    char(1) default ' ' not null,
  vsiaspar    char(39) default ' ' not null,
  lf          char(1)
);
create unique index visiaua1 on visiauaf
(
vsiacdat,
vsiactim,
vsiartyp,
vsiavisn
);
create unique index visiaua2 on visiauaf
(
vsiavisn,
vsiacdat,
vsiactim,
vsiartyp
);
revoke all on visiauaf from public ; 
grant select on visiauaf to public ; 
