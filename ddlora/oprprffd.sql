create table oprprfaf
(
  oppruniq    varchar2(10) default ' ' not null,
  opprteam    varchar2(1) default ' ' not null,
  opprpref    varchar2(15) default ' ' not null,
  opprdcod    varchar2(6) default ' ' not null,
  opprpqty    number(3,0) default 0 not null,
  opprspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprprfa1 primary key( 
oppruniq,
opprteam,
opprdcod,
opprpref)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
