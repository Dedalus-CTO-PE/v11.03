create table patqrdaf
(
dptqradm    char(8),
dptqrepn    char(2),
dptqrcnt    char(2),
ptqrbisa    decimal(3,0),
ptqrbisd    decimal(3,0),
ptqrclsp    char(3),
ptqrodte    char(8),
ptqrartr    char(1),
ptqrusrf    char(1),
ptqrpcsa    char(1),
ptqrpcsd    char(1),
ptqrrgaa    char(2),
ptqrrgad    char(2),
ptqrsrpc    char(2),
ptqrfima    decimal(3,0),
ptqrfimd    decimal(3,0),
ptqrdiag    char(5),
ptqrcom1    char(70),
ptqrcom2    char(70),
ptqrfadt    char(8),
ptqrfddt    char(8),
ptqrmcdt    char(8),
ptqrspar    char(7),
lf          char(1)
);
create unique index patqrda1 on patqrdaf
(
dptqradm,
dptqrepn,
dptqrcnt
);
revoke all on patqrdaf from public ; 
grant select on patqrdaf to public ; 
