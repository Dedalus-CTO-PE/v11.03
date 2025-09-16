create table alldllaf
(
  aldldept    varchar2(3) default ' ' not null,
  aldlracp    varchar2(3) default ' ' not null,
  aldlracr    varchar2(3) default ' ' not null,
  aldlurap    varchar2(3) default ' ' not null,
  aldlurar    varchar2(3) default ' ' not null,
  aldlrpat    varchar2(3) default ' ' not null,
  aldlrref    varchar2(3) default ' ' not null,
  aldlplab    varchar2(2) default ' ' not null,
  aldlracg    varchar2(3) default ' ' not null,
  aldlurag    varchar2(3) default ' ' not null,
  aldlrrjg    varchar2(3) default ' ' not null,
  aldlspar    varchar2(61) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alldlla1 primary key( 
aldldept)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
