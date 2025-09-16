create table nzpspraf
(
  nzspadmn    char(8) default ' ' not null,
  nzspclmn    char(3) default ' ' not null,
  nzspsurg    char(10) default ' ' not null,
  nzspproc    char(9) default ' ' not null,
  nzspuniq    char(3) default ' ' not null,
  nzspcntr    char(6) default ' ' not null,
  nzspcprc    char(9) default ' ' not null,
  nzspprim    decimal(1,0) default 0 not null,
  nzspanae    char(10) default ' ' not null,
  nzsppdes    char(80) default ' ' not null,
  nzspicap    decimal(1,0) default 0 not null,
  nzsppind    decimal(1,0) default 0 not null,
  nzsppins    decimal(1,0) default 0 not null,
  nzspinsr    char(3) default ' ' not null,
  nzspaprv    char(20) default ' ' not null,
  nzspapsi    decimal(1,0) default 0 not null,
  nzspclno    char(20) default ' ' not null,
  nzspapnt    char(30) default ' ' not null,
  nzspcmnt    char(30) default ' ' not null,
  nzsptdur    decimal(5,0) default 0 not null,
  nzsptfee    decimal(14,2) default 0 not null,
  nzspffee    decimal(16,2) default 0 not null,
  nzsphpay    decimal(16,2) default 0 not null,
  nzspcpay    decimal(16,2) default 0 not null,
  nzspfadj    decimal(16,2) default 0 not null,
  nzsphadj    decimal(16,2) default 0 not null,
  nzspcadj    decimal(16,2) default 0 not null,
  nzspudf1    char(3) default ' ' not null,
  nzspudf2    char(3) default ' ' not null,
  nzspcdat    char(8) default ' ' not null,
  nzspctim    char(8) default ' ' not null,
  nzspcuid    char(10) default ' ' not null,
  nzspudat    char(8) default ' ' not null,
  nzsputim    char(8) default ' ' not null,
  nzspuuid    char(10) default ' ' not null,
  nzspadte    char(8) default ' ' not null,
  nzspcont    char(1) default ' ' not null,
  nzspinvd    char(1) default ' ' not null,
  nzspunth    char(10) default ' ' not null,
  nzspspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index nzpspra1 on nzpspraf
(
nzspadmn,
nzspuniq
);
create unique index nzpspra2 on nzpspraf
(
nzspadmn,
nzspcntr,
nzspuniq
);
revoke all on nzpspraf from public ; 
grant select on nzpspraf to public ; 
