public class math {
    public double e = Math.E;
    public double pi = Math.PI;

    // Comparison Functions
    public Object eq(Object obj1, Object obj2) {
        return !(Boolean) new math().ne(obj1, obj2);
    }

    public Object ne(Object obj1, Object obj2) {
        if (obj1 == null) {
            if (obj2 == null) {
                return false;
            }
            return !obj2.equals(obj1);
        }
        return !obj1.equals(obj2);
    }

    public Object gt(Object obj1, Object obj2) {
        if (obj1 instanceof Long) {
            if (obj2 instanceof Long) {
                return (Long) obj1 > (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Long) obj1 > (Double) obj2;
            } else if (obj2 instanceof String) {
                long obj2_ = 0;
                for (char _char : ((String) obj2).toCharArray()) {
                    obj2_ += (int) _char;
                }
                return (Double) obj1 > obj2_;
            }
        } else if (obj1 instanceof Double) {
            if (obj2 instanceof Long) {
                return (Double) obj1 > (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Double) obj1 > (Double) obj2;
            } else if (obj2 instanceof String) {
                long obj2_ = 0;
                for (char _char : ((String) obj2).toCharArray()) {
                    obj2_ += (int) _char;
                }
                return (Double) obj1 > obj2_;
            }
        } else if (obj2 instanceof String) {
            long obj1_ = 0;
                for (char _char : ((String) obj1).toCharArray()) {
                    obj1_ += (int) _char;
                }
            if (obj2 instanceof Long) {
                return obj1_ > (Long) obj2;
            } else if (obj2 instanceof Double) {
                return obj1_ > (Double) obj2;
            } else if (obj2 instanceof String) {
                long obj2_ = 0;
                for (char _char : ((String) obj2).toCharArray()) {
                    obj2_ += (int) _char;
                }
                return obj1_ > obj2_;
            }
        }
        return false;
    }

    public Object lt(Object obj1, Object obj2) {
        return !((Boolean) new math().gt(obj1, obj2)) && !(Boolean) new math().eq(obj1, obj2);
    }

    public Object ge(Object obj1, Object obj2) {
        return (Boolean) new math().gt(obj1, obj2) && (Boolean) new math().eq(obj1, obj2);
    }

    public Object le(Object obj1, Object obj2) {
        return !((Boolean) new math().gt(obj1, obj2));
    }

    public Object not(Object obj) {
        if (obj == null) {
            return true;
        }
        return obj.equals(false)
            || obj.equals("")
            || obj.equals(0);
    }
    
    public Object and(Object obj1, Object obj2) {
        return !(Boolean) new math().not(obj1) && !(Boolean) new math().not(obj2);
    }

    public Object or(Object obj1, Object obj2) {
        return !(Boolean) new math().not(obj1) || !(Boolean) new math().not(obj2);
    }

    public Object xor(Object obj1, Object obj2) {
        return (Boolean) new math().or(obj1, obj2) && !(Boolean) new math().and(obj1, obj2);
    }

    // Arithmetic Functions
    public Object add(Object obj1, Object obj2) {
        if (obj1 instanceof Long) {
            if (obj2 instanceof Long) {
                return (Long) obj1 + (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Long) obj1 + (Double) obj2;
            }
        } else if (obj1 instanceof Double) {
            if (obj2 instanceof Long) {
                return (Double) obj1 + (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Double) obj1 + (Double) obj2;
            }
        }
        return null;
    }

    public Object sub(Object obj1, Object obj2) {
        if (obj1 instanceof Long) {
            if (obj2 instanceof Long) {
                return (Long) obj1 - (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Long) obj1 - (Double) obj2;
            }
        } else if (obj1 instanceof Double) {
            if (obj2 instanceof Long) {
                return (Double) obj1 - (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Double) obj1 - (Double) obj2;
            }
        }
        return null;
    }

    public Object mul(Object obj1, Object obj2) {
        if (obj1 instanceof Long) {
            if (obj2 instanceof Long) {
                return (Long) obj1 * (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Long) obj1 * (Double) obj2;
            }
        } else if (obj1 instanceof Double) {
            if (obj2 instanceof Long) {
                return (Double) obj1 * (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Double) obj1 * (Double) obj2;
            }
        }
        return null;
    }

    public Object div(Object obj1, Object obj2) {
        if (obj1 instanceof Long) {
            if (obj2 instanceof Long) {
                return ((Long) obj1).doubleValue() / ((Long) obj2).doubleValue();
            } else if (obj2 instanceof Double) {
                return ((Long) obj1) / (Double) obj2;
            }
        } else if (obj1 instanceof Double) {
            if (obj2 instanceof Long) {
                return (Double) obj1 / ((Long) obj2).doubleValue();
            } else if (obj2 instanceof Double) {
                return (Double) obj1 / (Double) obj2;
            }
        }
        return null;
    }

    // Mathematical Functions
    public Object abs(Object obj) {
        if (obj instanceof Long) {
            return Math.abs((Long) obj);
        } else if (obj instanceof Double) {
            return Math.abs((Double) obj);
        }
        return null;
    }

    public Object acos(Object obj) {
        if (obj instanceof Long) {
            return Math.acos((Long) obj);
        } else if (obj instanceof Double) {
            return Math.acos((Double) obj);
        }
        return null;
    }

    public Object asin(Object obj) {
        if (obj instanceof Long) {
            return Math.asin((Long) obj);
        } else if (obj instanceof Double) {
            return Math.asin((Double) obj);
        }
        return null;
    }

    public Object atan(Object obj) {
        if (obj instanceof Long) {
            return Math.atan((Long) obj);
        } else if (obj instanceof Double) {
            return Math.atan((Double) obj);
        }
        return null;
    }

    public Object atan2(Object obj1, Object obj2) {
        if (obj1 instanceof Long) {
            if (obj2 instanceof Long) {
                return Math.atan2((Long) obj1, (Long) obj2);
            } else if (obj2 instanceof Double) {
                return Math.atan2((Long) obj1, (Double) obj2);
            }
        } else if (obj1 instanceof Double) {
            if (obj2 instanceof Long) {
                return Math.atan2((Double) obj1, (Long) obj2);
            } else if (obj2 instanceof Double) {
                return Math.atan2((Double) obj1, (Double) obj2);
            }
        }
        return null;
    }

    public Object ceil(Object obj) {
        if (obj instanceof Long) {
            return Double.valueOf(Math.ceil((Long) obj)).longValue();
        } else if (obj instanceof Double) {
            return Double.valueOf(Math.ceil((Double) obj)).longValue();
        }
        return null;
    }

    public Object cos(Object obj) {
        if (obj instanceof Long) {
            return Math.cos((Long) obj);
        } else if (obj instanceof Double) {
            return Math.cos((Double) obj);
        }
        return null;
    }

    public Object cosh(Object obj) {
        if (obj instanceof Long) {
            return Math.cosh((Long) obj);
        } else if (obj instanceof Double) {
            return Math.cosh((Double) obj);
        }
        return null;
    }

    public Object deg(Object obj) {
        if (obj instanceof Long) {
            return Math.toDegrees((Long) obj);
        } else if (obj instanceof Double) {
            return Math.toDegrees((Double) obj);
        }
        return null;
    }

    public Object exp(Object obj) {
        if (obj instanceof Long) {
            return Math.exp((Long) obj);
        } else if (obj instanceof Double) {
            return Math.exp((Double) obj);
        }
        return null;
    }

    public Object floor(Object obj) {
        if (obj instanceof Long) {
            return Double.valueOf(Math.floor((Long) obj)).longValue();
        } else if (obj instanceof Double) {
            return Double.valueOf(Math.floor((Double) obj)).longValue();
        }
        return null;
    }

    public Object log(Object obj) {
        if (obj instanceof Long) {
            return Math.log((Long) obj);
        } else if (obj instanceof Double) {
            return Math.log((Double) obj);
        }
        return null;
    }

    public Object log10(Object obj) {
        if (obj instanceof Long) {
            return Math.log10((Long) obj);
        } else if (obj instanceof Double) {
            return Math.log10((Double) obj);
        }
        return null;
    }

    public Object mod(Object obj1, Object obj2) {
        if (obj1 instanceof Long) {
            if (obj2 instanceof Long) {
                return (Long) obj1 % (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Long) obj1 % (Double) obj2;
            }
        } else if (obj1 instanceof Double) {
            if (obj2 instanceof Long) {
                return (Double) obj1 % (Long) obj2;
            } else if (obj2 instanceof Double) {
                return (Double) obj1 % (Double) obj2;
            }
        }
        return null;
    }

    public Object pow(Object obj1, Object obj2) {
        if (obj1 instanceof Long) {
            if (obj2 instanceof Long) {
                return Math.pow((Long) obj1, (Long) obj2);
            } else if (obj2 instanceof Double) {
                return Math.pow((Double) obj1, (Double) obj2);
            }
        } else if (obj1 instanceof Double) {
            if (obj2 instanceof Long) {
                return Math.pow((Double) obj1, (Double) obj2);
            } else if (obj2 instanceof Double) {
                return Math.pow((Double) obj1, (Double) obj2);
            }
        }
        return null;
    }

    public Object rad(Object obj) {
        if (obj instanceof Long) {
            return Math.toRadians((Long) obj);
        } else if (obj instanceof Double) {
            return Math.toRadians((Double) obj);
        }
        return null;
    }

    public Object random() {
        return Math.random();
    }

    public Object round(Object obj) {
        if (obj instanceof Long) {
            return Double.valueOf(Math.round((Long) obj)).longValue();
        } else if (obj instanceof Double) {
            return Double.valueOf(Math.round((Double) obj)).longValue();
        }
        return null;
    }

    public Object sin(Object obj) {
        if (obj instanceof Long) {
            return Math.sin((Long) obj);
        } else if (obj instanceof Double) {
            return Math.sin((Double) obj);
        }
        return null;
    }

    public Object sinh(Object obj) {
        if (obj instanceof Long) {
            return Math.sinh((Long) obj);
        } else if (obj instanceof Double) {
            return Math.sinh((Double) obj);
        }
        return null;
    }

    public Object sqrt(Object obj) {
        if (obj instanceof Long) {
            return Math.sqrt((Long) obj);
        } else if (obj instanceof Double) {
            return Math.sqrt((Double) obj);
        }
        return null;
    }

    public Object tan(Object obj) {
        if (obj instanceof Long) {
            return Math.tan((Long) obj);
        } else if (obj instanceof Double) {
            return Math.tan((Double) obj);
        }
        return null;
    }

    public Object tanh(Object obj) {
        if (obj instanceof Long) {
            return Math.tanh((Long) obj);
        } else if (obj instanceof Double) {
            return Math.tanh((Double) obj);
        }
        return null;
    }
}