create table pmsaupaf
(
pmapurno    varchar2(8),
pmappnum    varchar2(5),
pmapwuid    varchar2(10),
pmapdate    varchar2(8),
pmaptime    varchar2(5),
pmapacty    varchar2(1),
pmapaccd    varchar2(3),
pmapcomm    varchar2(40),
pmapspar    varchar2(40),
lf          varchar2(1),
constraint pmsaupa1 primary key( 
pmapurno,
pmappnum,
pmapdate,
pmaptime,
pmapwuid)
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
create public synonym pmsaupaf for pmsaupaf;
