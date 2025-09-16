create table nzppicaf
(
  nzpiadmn    varchar2(8) default ' ' not null,
  nzpiinvn    varchar2(8) default ' ' not null,
  nzpiurno    varchar2(8) default ' ' not null,
  nzpicntr    varchar2(6) default ' ' not null,
  nzpiclmn    varchar2(3) default ' ' not null,
  nzpisurg    varchar2(10) default ' ' not null,
  nzpifpay    varchar2(1) default ' ' not null,
  nzpicaps    varchar2(1) default ' ' not null,
  nzpiexpt    varchar2(1) default ' ' not null,
  nzpiuniq    varchar2(6) default ' ' not null,
  nzpicprc    varchar2(9) default ' ' not null,
  nzpipdat    varchar2(8) default ' ' not null,
  nzpicdat    varchar2(8) default ' ' not null,
  nzpictim    varchar2(8) default ' ' not null,
  nzpicuid    varchar2(10) default ' ' not null,
  nzpiudat    varchar2(8) default ' ' not null,
  nzpiutim    varchar2(8) default ' ' not null,
  nzpiuuid    varchar2(10) default ' ' not null,
  nzpianae    varchar2(10) default ' ' not null,
  nzpispar    varchar2(90) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzppica1 primary key( 
nzpiadmn,
nzpiinvn,
nzpiuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index nzppica2 on nzppicaf
(
nzpipdat,
nzpiadmn,
nzpiinvn,
nzpiuniq
)
  tablespace pas_indx; 
