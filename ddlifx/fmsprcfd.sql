create table fmsprcaf
(
  fmprcode    char(3) default ' ' not null,
  fmprdesc    char(20) default ' ' not null,
  fmprpt1b    char(3) default ' ' not null,
  fmprpt2b    char(3) default ' ' not null,
  fmprpt3b    char(3) default ' ' not null,
  fmprpt1a    char(3) default ' ' not null,
  fmprpt2a    char(3) default ' ' not null,
  fmprpt3a    char(3) default ' ' not null,
  fmprundl    decimal(1,0) default 0 not null,
  fmprundc    char(1) default ' ' not null,
  fmprblin    decimal(1,0) default 0 not null,
  fmpralin    decimal(1,0) default 0 not null,
  fmprbold    decimal(1,0) default 0 not null,
  fmprsupp    char(1) default ' ' not null,
  fmprspar    char(41) default ' ' not null,
  lf          char(1)
);
create unique index fmsprca1 on fmsprcaf
(
fmprcode
);
revoke all on fmsprcaf from public ; 
grant select on fmsprcaf to public ; 
