create table watmtxaf
(
  wtmturno    varchar2(8) default ' ' not null,
  wtmtproc    varchar2(9) default ' ' not null,
  wtmtpcnt    varchar2(2) default ' ' not null,
  wtmttype    varchar2(3) default ' ' not null,
  wtmtnote    varchar2(6) default ' ' not null,
  wtmtuniq    varchar2(3) default ' ' not null,
  wtmtcmnt    varchar2(100) default ' ' not null,
  wtmtspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint watmtxa1 primary key( 
wtmturno,
wtmtproc,
wtmtpcnt,
wtmttype,
wtmtnote,
wtmtuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym watmtxaf for watmtxaf;
