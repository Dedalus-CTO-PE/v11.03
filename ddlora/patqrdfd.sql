create table patqrdaf
(
dptqradm    varchar2(8),
dptqrepn    varchar2(2),
dptqrcnt    varchar2(2),
ptqrbisa    number(3,0),
ptqrbisd    number(3,0),
ptqrclsp    varchar2(3),
ptqrodte    varchar2(8),
ptqrartr    varchar2(1),
ptqrusrf    varchar2(1),
ptqrpcsa    varchar2(1),
ptqrpcsd    varchar2(1),
ptqrrgaa    varchar2(2),
ptqrrgad    varchar2(2),
ptqrsrpc    varchar2(2),
ptqrfima    number(3,0),
ptqrfimd    number(3,0),
ptqrdiag    varchar2(5),
ptqrcom1    varchar2(70),
ptqrcom2    varchar2(70),
ptqrfadt    varchar2(8),
ptqrfddt    varchar2(8),
ptqrmcdt    varchar2(8),
ptqrspar    varchar2(7),
lf          varchar2(1),
constraint patqrda1 primary key( 
dptqradm,
dptqrepn,
dptqrcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym patqrdaf for patqrdaf;
