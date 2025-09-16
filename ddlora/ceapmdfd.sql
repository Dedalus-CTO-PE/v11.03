create table ceapmdaf
(
  cepmmod     varchar2(1) default ' ' not null,
  cepmdrgc    varchar2(4) default ' ' not null,
  cepmpcas    number(12,2) default 0 not null,
  cepmpday    number(12,2) default 0 not null,
  cepmspa     varchar2(39) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceapmda1 primary key( 
cepmmod,
cepmdrgc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
