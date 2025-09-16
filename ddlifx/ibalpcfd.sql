create table ibalpcaf
(
  iblpsche    char(5) default ' ' not null,
  iblpurno    char(8) default ' ' not null,
  iblpvisn    char(8) default ' ' not null,
  iblpskey    char(50) default ' ' not null,
  iblpprnt    char(6) default ' ' not null,
  iblpcopy    decimal(3,0) default 0 not null,
  iblpstat    char(6) default ' ' not null,
  iblplapr    char(8) default ' ' not null,
  iblplasc    char(2) default ' ' not null,
  iblpfre1    char(40) default ' ' not null,
  iblpfre2    char(40) default ' ' not null,
  iblpfre3    char(40) default ' ' not null,
  iblpfre4    char(40) default ' ' not null,
  iblpfre5    char(40) default ' ' not null,
  iblpfre6    char(40) default ' ' not null,
  iblpfre7    char(40) default ' ' not null,
  iblpruid    char(10) default ' ' not null,
  iblprdat    char(8) default ' ' not null,
  iblprtim    char(8) default ' ' not null,
  iblpspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index ibalpca1 on ibalpcaf
(
iblpsche
);
revoke all on ibalpcaf from public ; 
grant select on ibalpcaf to public ; 
