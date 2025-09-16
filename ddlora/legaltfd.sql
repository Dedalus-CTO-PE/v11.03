create table legaltaf
(
  lgaturno    varchar2(8) default ' ' not null,
  lgatadat    varchar2(8) default ' ' not null,
  lgatatim    varchar2(8) default ' ' not null,
  lgatevno    varchar2(8) default ' ' not null,
  lgattype    number(1,0) default 0 not null,
  lgatstat    varchar2(30) default ' ' not null,
  lgatddrg    varchar2(4) default ' ' not null,
  lgatddat    varchar2(8) default ' ' not null,
  lgatdtim    varchar2(8) default ' ' not null,
  lgathosc    varchar2(5) default ' ' not null,
  lgatatdr    varchar2(20) default ' ' not null,
  lgatprpf    varchar2(120) default ' ' not null,
  lgatspar    varchar2(21) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legalta1 primary key( 
lgaturno,
lgatadat,
lgatatim,
lgatevno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
