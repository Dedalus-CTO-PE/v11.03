create table pmsbisaf
(
pmbsseid    varchar2(4),
pmbsinvd    varchar2(8),
pmbsasat    varchar2(8),
pmbshosp    varchar2(3),
pmbsspar    varchar2(17),
lf          varchar2(1),
constraint pmsbisa1 primary key( 
pmbsseid)
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
create public synonym pmsbisaf for pmsbisaf;
