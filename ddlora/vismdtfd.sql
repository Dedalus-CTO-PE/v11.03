create table vismdtaf
(
vsmdvisn    varchar2(8),
vsmdtype    varchar2(3),
vsmdnote    varchar2(6),
vsmddate    varchar2(8),
vsmdtime    varchar2(8),
vsmduser    varchar2(10),
vsmdoccg    varchar2(3),
vsmddelt    varchar2(1),
vsmdddat    varchar2(8),
vsmddtim    varchar2(8),
vsmdduse    varchar2(10),
vsmddocc    varchar2(3),
vsmdspar    varchar2(127),
lf          varchar2(1),
constraint vismdta1 primary key( 
vsmdvisn,
vsmdtype,
vsmdnote)
)
tablespace ibandx0x 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace ibadat0x 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym vismdtaf for vismdtaf;
