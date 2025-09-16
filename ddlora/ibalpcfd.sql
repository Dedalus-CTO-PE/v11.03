create table ibalpcaf
(
  iblpsche    varchar2(5) default ' ' not null,
  iblpurno    varchar2(8) default ' ' not null,
  iblpvisn    varchar2(8) default ' ' not null,
  iblpskey    varchar2(50) default ' ' not null,
  iblpprnt    varchar2(6) default ' ' not null,
  iblpcopy    number(3,0) default 0 not null,
  iblpstat    varchar2(6) default ' ' not null,
  iblplapr    varchar2(8) default ' ' not null,
  iblplasc    varchar2(2) default ' ' not null,
  iblpfre1    varchar2(40) default ' ' not null,
  iblpfre2    varchar2(40) default ' ' not null,
  iblpfre3    varchar2(40) default ' ' not null,
  iblpfre4    varchar2(40) default ' ' not null,
  iblpfre5    varchar2(40) default ' ' not null,
  iblpfre6    varchar2(40) default ' ' not null,
  iblpfre7    varchar2(40) default ' ' not null,
  iblpruid    varchar2(10) default ' ' not null,
  iblprdat    varchar2(8) default ' ' not null,
  iblprtim    varchar2(8) default ' ' not null,
  iblpspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibalpca1 primary key( 
iblpsche)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
