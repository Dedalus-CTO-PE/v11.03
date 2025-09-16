create table patratef
(
rcompn      varchar2(3),
rclass      varchar2(3),
rtype       varchar2(3),
rcstat      varchar2(3),
rtcpday     number(14,2),
rcpdes      varchar2(20),
rtceday     number(14,2),
rcedes      varchar2(20),
rhb21       number(1,0),
rcspare     varchar2(13),
lf          varchar2(1),
constraint patrate1 primary key( 
rcompn,
rclass,
rtype,
rcstat)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym patratef for patratef;
