create table pmsbliaf
(
pmblseid    varchar2(4),
pmblsedc    varchar2(35),
pmbltype    varchar2(1),
pmblstdt    varchar2(8),
pmblendt    varchar2(8),
pmblstnm    varchar2(6),
pmblennm    varchar2(6),
pmbldays    number(4,0),
pmblmamt    number(8,2),
pmblward    varchar2(3),
pmblhosp    varchar2(3),
pmblspar    varchar2(17),
lf          varchar2(1),
constraint pmsblia1 primary key( 
pmblseid)
)
tablespace indx 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace indx 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pmsbliaf for pmsbliaf;
