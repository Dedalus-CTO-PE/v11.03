create table obsmtxaf
(
  obmturno    varchar2(8) default ' ' not null,
  obmtnote    varchar2(6) default ' ' not null,
  obmtuniq    varchar2(3) default ' ' not null,
  obmtcmnt    varchar2(100) default ' ' not null,
  obmtspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsmtxa1 primary key( 
obmturno,
obmtnote,
obmtuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
