create table opraudsm
(
  opsmaudd    char(8) default ' ' not null,
  opsmaudt    char(8) default ' ' not null,
  opsmaudp    char(2) default ' ' not null,
  opsmaudr    char(1) default ' ' not null,
  opsmauds    decimal(1,0) default 0 not null,
  opsmaudo    char(4) default ' ' not null,
  opsmclin    char(6) default ' ' not null,
  dopsmday    char(1) default ' ' not null,
  opsmtime    char(5) default ' ' not null,
  opsmftyp    decimal(1,0) default 0 not null,
  opsmmrfq    char(5) default ' ' not null,
  opsmyrfq    char(53) default ' ' not null,
  opsmdura    decimal(4,0) default 0 not null,
  opsmtper    char(3) default ' ' not null,
  opsmtype    char(3) default ' ' not null,
  opsmthet    char(6) default ' ' not null,
  opsmendt    char(5) default ' ' not null,
  opsmbrkt    decimal(3,0) default 0 not null,
  opsmprep    decimal(2,0) default 0 not null,
  opsmanae    char(6) default ' ' not null,
  opsmxdoc    char(6) default ' ' not null,
  opsmstat    decimal(1,0) default 0 not null,
  opsmspi1    char(50) default ' ' not null,
  opsmspi2    char(50) default ' ' not null,
  opsmndlk    char(2) default ' ' not null,
  opsmstyp    char(3) default ' ' not null,
  opsmdgsi    char(3) default ' ' not null,
  opsmhosp    char(3) default ' ' not null,
  opsmspar    char(27) default ' ' not null,
  lf          char(1)
);
create index opraudsm on opraudsm
(
opsmaudd,
opsmaudt,
opsmaudp,
opsmaudr
);
revoke all on opraudsm from public ; 
grant select on opraudsm to public ; 
create table oprsemaf
(
  opsmclin    char(6) default ' ' not null,
  dopsmday    char(1) default ' ' not null,
  opsmtime    char(5) default ' ' not null,
  opsmftyp    decimal(1,0) default 0 not null,
  opsmmrfq    char(5) default ' ' not null,
  opsmyrfq    char(53) default ' ' not null,
  opsmdura    decimal(4,0) default 0 not null,
  opsmtper    char(3) default ' ' not null,
  opsmtype    char(3) default ' ' not null,
  opsmthet    char(6) default ' ' not null,
  opsmendt    char(5) default ' ' not null,
  opsmbrkt    decimal(3,0) default 0 not null,
  opsmprep    decimal(2,0) default 0 not null,
  opsmanae    char(6) default ' ' not null,
  opsmxdoc    char(6) default ' ' not null,
  opsmstat    decimal(1,0) default 0 not null,
  opsmspi1    char(50) default ' ' not null,
  opsmspi2    char(50) default ' ' not null,
  opsmndlk    char(2) default ' ' not null,
  opsmstyp    char(3) default ' ' not null,
  opsmdgsi    char(3) default ' ' not null,
  opsmhosp    char(3) default ' ' not null,
  opsmspar    char(27) default ' ' not null,
  lf          char(1)
);
create unique index oprsema1 on oprsemaf
(
opsmhosp,
opsmclin,
dopsmday,
opsmtime,
opsmthet
);
create unique index oprsema2 on oprsemaf
(
opsmclin,
dopsmday,
opsmtime,
opsmthet,
opsmhosp
);
revoke all on oprsemaf from public ; 
grant select on oprsemaf to public ; 
