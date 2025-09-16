create table nzpspraf
(
  nzspadmn    varchar2(8) default ' ' not null,
  nzspclmn    varchar2(3) default ' ' not null,
  nzspsurg    varchar2(10) default ' ' not null,
  nzspproc    varchar2(9) default ' ' not null,
  nzspuniq    varchar2(3) default ' ' not null,
  nzspcntr    varchar2(6) default ' ' not null,
  nzspcprc    varchar2(9) default ' ' not null,
  nzspprim    number(1,0) default 0 not null,
  nzspanae    varchar2(10) default ' ' not null,
  nzsppdes    varchar2(80) default ' ' not null,
  nzspicap    number(1,0) default 0 not null,
  nzsppind    number(1,0) default 0 not null,
  nzsppins    number(1,0) default 0 not null,
  nzspinsr    varchar2(3) default ' ' not null,
  nzspaprv    varchar2(20) default ' ' not null,
  nzspapsi    number(1,0) default 0 not null,
  nzspclno    varchar2(20) default ' ' not null,
  nzspapnt    varchar2(30) default ' ' not null,
  nzspcmnt    varchar2(30) default ' ' not null,
  nzsptdur    number(5,0) default 0 not null,
  nzsptfee    number(14,2) default 0 not null,
  nzspffee    number(16,2) default 0 not null,
  nzsphpay    number(16,2) default 0 not null,
  nzspcpay    number(16,2) default 0 not null,
  nzspfadj    number(16,2) default 0 not null,
  nzsphadj    number(16,2) default 0 not null,
  nzspcadj    number(16,2) default 0 not null,
  nzspudf1    varchar2(3) default ' ' not null,
  nzspudf2    varchar2(3) default ' ' not null,
  nzspcdat    varchar2(8) default ' ' not null,
  nzspctim    varchar2(8) default ' ' not null,
  nzspcuid    varchar2(10) default ' ' not null,
  nzspudat    varchar2(8) default ' ' not null,
  nzsputim    varchar2(8) default ' ' not null,
  nzspuuid    varchar2(10) default ' ' not null,
  nzspadte    varchar2(8) default ' ' not null,
  nzspcont    varchar2(1) default ' ' not null,
  nzspinvd    varchar2(1) default ' ' not null,
  nzspunth    varchar2(10) default ' ' not null,
  nzspspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzpspra1 primary key( 
nzspadmn,
nzspuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index nzpspra2 on nzpspraf
(
nzspadmn,
nzspcntr,
nzspuniq
)
  tablespace pas_indx; 
