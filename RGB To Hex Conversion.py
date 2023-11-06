def hex_hyi(name):
    if name>255:
        name=255
    elif name<0:
        name=0
    name=str(hex(name))[2:].upper()
    if len(name)<2:
        name="0"+name
    return name


def rgb(r,g,b):
    r= hex_hyi(r)
    g= hex_hyi(g)
    b= hex_hyi(b)
    return r+g+b
    pass
