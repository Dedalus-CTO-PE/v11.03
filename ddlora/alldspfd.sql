create table alldspaf
(
  aldpdept    varchar2(3) default ' ' not null,
  aldpct01    varchar2(2) default ' ' not null,
  aldpct02    varchar2(2) default ' ' not null,
  aldpct03    varchar2(2) default ' ' not null,
  aldpct04    varchar2(2) default ' ' not null,
  aldpct05    varchar2(2) default ' ' not null,
  aldpct06    varchar2(2) default ' ' not null,
  aldpct07    varchar2(2) default ' ' not null,
  aldpct08    varchar2(2) default ' ' not null,
  aldpct09    varchar2(2) default ' ' not null,
  aldpct10    varchar2(2) default ' ' not null,
  aldpct11    varchar2(2) default ' ' not null,
  aldpct12    varchar2(2) default ' ' not null,
  aldpct13    varchar2(2) default ' ' not null,
  aldpct14    varchar2(2) default ' ' not null,
  aldpct15    varchar2(2) default ' ' not null,
  aldpct16    varchar2(2) default ' ' not null,
  aldpct17    varchar2(2) default ' ' not null,
  aldpct18    varchar2(2) default ' ' not null,
  aldpct19    varchar2(2) default ' ' not null,
  aldpct20    varchar2(2) default ' ' not null,
  aldpct21    varchar2(2) default ' ' not null,
  aldpct22    varchar2(2) default ' ' not null,
  aldpct23    varchar2(2) default ' ' not null,
  aldpct24    varchar2(2) default ' ' not null,
  aldpct25    varchar2(2) default ' ' not null,
  aldpct26    varchar2(2) default ' ' not null,
  aldpspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alldspa1 primary key( 
aldpdept)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
