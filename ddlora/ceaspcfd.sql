create table ceaspcaf
(
  cespspc     varchar2(3) default ' ' not null,
  cespdes     varchar2(35) default ' ' not null,
  cespur1     varchar2(30) default ' ' not null,
  cespur2     varchar2(30) default ' ' not null,
  cespud1     varchar2(8) default ' ' not null,
  cespud2     varchar2(8) default ' ' not null,
  cespuy1     varchar2(1) default ' ' not null,
  cespuy2     varchar2(1) default ' ' not null,
  cespspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceaspca1 primary key( 
cespspc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
