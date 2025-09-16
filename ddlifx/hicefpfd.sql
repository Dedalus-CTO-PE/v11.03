create table hicefpaf
(
  hcepprun    char(3) default ' ' not null,
  hcepcntr    char(5) default ' ' not null,
  hceppyee    char(10) default ' ' not null,
  hcepnclm    decimal(2,0) default 0 not null,
  hcepbsbn    decimal(6,0) default 0 not null,
  hcepaccn    decimal(9,0) default 0 not null,
  hcepanam    char(32) default ' ' not null,
  hcepdamt    decimal(14,2) default 0 not null,
  hcepspar    char(15) default ' ' not null,
  lf          char(1)
);
create unique index hicefpa1 on hicefpaf
(
hceppyee,
hcepprun,
hcepcntr
);
revoke all on hicefpaf from public ; 
grant select on hicefpaf to public ; 
