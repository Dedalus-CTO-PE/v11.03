create table patrdeaf
(
  dptrdadm    char(8) default ' ' not null,
  dptrdepn    char(2) default ' ' not null,
  ptrdbisa    decimal(3,0) default 0 not null,
  ptrdbisd    decimal(3,0) default 0 not null,
  ptrdclsp    char(3) default ' ' not null,
  ptrdodte    char(8) default ' ' not null,
  ptrdartr    char(1) default ' ' not null,
  ptrdusrf    char(1) default ' ' not null,
  ptrdpcsa    char(1) default ' ' not null,
  ptrdpcsd    char(1) default ' ' not null,
  ptrdrgaa    char(2) default ' ' not null,
  ptrdrgad    char(2) default ' ' not null,
  ptrdsrpc    char(2) default ' ' not null,
  ptrdfima    decimal(3,0) default 0 not null,
  ptrdfimd    decimal(3,0) default 0 not null,
  ptrddiag    char(5) default ' ' not null,
  ptrdcom1    char(70) default ' ' not null,
  ptrdcom2    char(70) default ' ' not null,
  ptrdfadt    char(8) default ' ' not null,
  ptrdfddt    char(8) default ' ' not null,
  ptrdimpr    char(7) default ' ' not null,
  ptrdpoca    char(3) default ' ' not null,
  ptrdpocd    char(3) default ' ' not null,
  ptrdvers    char(2) default ' ' not null,
  ptrdsnap    char(3) default ' ' not null,
  ptrdspar    char(45) default ' ' not null,
  lf          char(1)
);
create unique index patrdea1 on patrdeaf
(
dptrdadm,
dptrdepn
);
revoke all on patrdeaf from public ; 
grant select on patrdeaf to public ; 
