create table wataudcp
(
wtcpaudd    varchar2(8),
wtcpaudt    varchar2(8),
wtcpaudp    varchar2(2),
wtcpaudr    varchar2(1),
wtcpauds    number(1,0),
wtcpaudo    varchar2(4),
wtcpdoct    varchar2(6),
wtcpproc    varchar2(9),
wtcpstay    number(3,0),
wtcptime    number(5,0),
wtcpspar    varchar2(27),
lf          varchar2(1)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
);
create public synonym wataudcp for wataudcp;
create index wataudcp on wataudcp
(
wtcpaudd,
wtcpaudt,
wtcpaudp,
wtcpaudr
)
tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create table watcptaf
(
wtcpdoct    varchar2(6),
wtcpproc    varchar2(9),
wtcpstay    number(3,0),
wtcptime    number(5,0),
wtcpspar    varchar2(27),
lf          varchar2(1),
constraint watcpta1 primary key( 
wtcpdoct,
wtcpproc)
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
create public synonym watcptaf for watcptaf;
