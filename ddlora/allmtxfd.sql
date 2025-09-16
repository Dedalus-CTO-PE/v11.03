create table allmtxaf
(
  almtvisn    varchar2(8) default ' ' not null,
  almtencn    varchar2(8) default ' ' not null,
  almttype    varchar2(3) default ' ' not null,
  almtnote    varchar2(6) default ' ' not null,
  almtuniq    varchar2(3) default ' ' not null,
  almtcmnt    varchar2(80) default ' ' not null,
  almtspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allmtxa1 primary key( 
almtvisn,
almtencn,
almttype,
almtnote,
almtuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
